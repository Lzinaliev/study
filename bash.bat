#!/bin/bash

# Папки для резервного копирования
SOURCE_DIR="./source"
BACKUP_DIR="./backup"

# Лог-файл
LOG_FILE="./backup.log"

# Функция создания резервной копии
backup_files() {
    echo "=== Резервное копирование начато: $(date) ===" >> "$LOG_FILE"
    
    # Проверяем, существует ли директория с исходными файлами
    if [ ! -d "$SOURCE_DIR" ]; then
        echo "Ошибка: Директория $SOURCE_DIR не существует." >> "$LOG_FILE"
        return 1
    fi
    
    # Создаем папку для резервного копирования, если она не существует
    mkdir -p "$BACKUP_DIR"
    
    # Копируем файлы
    rsync -av --exclude="*.tmp" "$SOURCE_DIR/" "$BACKUP_DIR/" >> "$LOG_FILE" 2>&1
    
    echo "Резервное копирование завершено: $(date)" >> "$LOG_FILE"
}

# Запускаем резервное копирование
backup_files

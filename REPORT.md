# Отчет по лабораторной работе №2

## Тема работы

Изучение системы контроля версий Git.

## Цель работы

Познакомиться с основными командами Git, научиться создавать репозиторий,
добавлять файлы, делать коммиты, работать с ветками и загружать изменения в
GitHub.

## Ход работы

### 1. Создание репозитория

Сначала я создала публичный репозиторий `lab02` на GitHub.
После этого в Linux в VirtualBox я подключила репозиторий локально.

Пример команд:

```bash
git clone https://github.com/kanadya07/lab02.git
cd lab02
```

### 2. Добавление файлов основной части лабораторной

Дальше я добавила в проект файлы библиотеки `print`, заголовочный файл и два
примера из методички.

Команды, которые использовались при работе:

```bash
mkdir -p include sources examples
touch include/print.hpp
touch sources/print.cpp
touch examples/example1.cpp
touch examples/example2.cpp
```

После этого файлы были добавлены в Git и сохранены в истории.

```bash
git add .
git commit -m "Добавила файлы основной части лабораторной"
```

### 3. Домашняя работа

В домашней работе я сделала программу `hello_world.cpp`.
Сначала была простая версия программы, потом она дорабатывалась.

Команды:

```bash
touch hello_world.cpp
git add hello_world.cpp
git commit -m "Добавила hello_world.cpp"
```

Потом я создала ветку `patch1`, исправила код и сохранила изменения.

```bash
git checkout -b patch1
git add hello_world.cpp
git commit -m "Исправила код в patch1"
git push origin patch1
```

После этого по смыслу задания была создана еще одна ветка `patch2`.

```bash
git checkout master
git checkout -b patch2
git add hello_world.cpp
git commit -m "Изменила оформление кода"
git push origin patch2
```

### 4. Оформление репозитория

В репозиторий были добавлены:

1. `TASK.md` - текст задания
2. `REPORT.md` - отчет
3. файлы основной части
4. домашняя работа

Команды:

```bash
git add TASK.md REPORT.md
git commit -m "Добавила задание и отчет"
git push origin master
```

## Что находится в репозитории

1. `TASK.md`
2. `REPORT.md`
3. `include/print.hpp`
4. `sources/print.cpp`
5. `examples/example1.cpp`
6. `examples/example2.cpp`
7. `hello_world.cpp`

## Вывод

Во время выполнения этой лабораторной работы я научилась создавать репозиторий,
добавлять файлы в индекс, делать коммиты, создавать ветки и отправлять
изменения на GitHub.

## Ссылка на репозиторий

https://github.com/kanadya07/lab02

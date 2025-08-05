# practice

学習用に作成した各種プログラムをまとめたリポジトリです。  

### 目次
- [概要](#概要)  
- [実行方法](#実行方法)  
  - [Windows](#windows)
  - [macOS](#macos)
- [ディレクトリ構成](#ディレクトリ構成)  

## 概要

このリポジトリは、学習で作成した小規模なコードをまとめたものです。  
各ファイルは基本的に単体で完結しており、コマンドラインから直接実行できるシンプルなプログラムです。  

## 実行方法

### Windows

<details>
<summary>C言語ファイル</summary>

1. GCC（MinGWなど）がインストールされているか確認  
    インストールされていない場合、以下のサイトからインストールしてください。  
      [MinGW-w64](https://sourceforge.net/projects/mingw-w64/)  
2. コマンドプロンプトを開く  
3. ソースコードのあるフォルダに移動（例）  

    ```shell
    cd path\to\c_files
    ```

4. コンパイルする  

    ```shell
    gcc ファイル名.c -o 実行ファイル名.exe
    ```

5. 実行ファイルを実行する  

    ```shell
    ./実行ファイル名.exe
    ```

</details>

<details> <summary>JavaScriptファイル</summary>

1. Node.jsがインストールされているか確認  
    インストールされていない場合、以下のサイトからインストールしてください。  
      [Node.js公式サイト](https://nodejs.org/ja)  
2. コマンドプロンプトを開く  
3. スクリプトのあるフォルダに移動（例）  

    ```shell
    cd path\to\js_files
    ```

4. 実行する  

    ```shell
    node ファイル名.js
    ```

</details>

<details> <summary>Pythonファイル</summary>

1. Pythonがインストールされているか確認  
    インストールされていない場合、以下からダウンロードしてください。  
      [Python公式サイト](https://www.python.org/downloads/)  
2. コマンドプロンプトを開く  
3. スクリプトのあるフォルダに移動  

    ```shell
    cd path\to\python_files
    ```

4. 実行する  

    ```shell
    python ファイル名.py
    ```

</details>

### macOS

<details> <summary>C言語ファイル</summary>

1. ターミナルを開く  
2. GCC（Xcode command Line Tools）がインストールされているか確認  
    ターミナルを開いて以下を実行すると、インストールがなければ促されます。  
      
      ```shell
      gcc --version
      ```

3. ソースコードのあるフォルダに移動（例）  

    ```shell
    cd /path/to/c_files
    ```

4. コンパイルする  

    ```shell
    gcc ファイル名.c -o 実行ファイル名
    ```

5. 実行ファイルを実行する  

    ```shell
    ./実行ファイル名
    ```

</details>

<details> <summary>JavaScriptファイル</summary>

1. Node.jsがインストールされているか確認  
    インストールされていない場合、以下からダウンロードしてください。  
      [Node.js公式サイト](https://nodejs.org/ja)  
2. ターミナルを開く  
3. スクリプトのあるフォルダに移動（例）  

    ```shell
    cd /path/to/js_files
    ```

4. 実行する  

    ```shell
    node ファイル名.js
    ```

</details>

<details> <summary>Pythonファイル</summary>

1. Pythonがインストールされているか確認  
    macOSはPython3がプリインストールされている場合が多いですが、ない場合は以下からダウンロードしてください。  
      [Python公式サイト](https://www.python.org/downloads/)  
2. ターミナルを開く  
3. スクリプトのあるフォルダに移動（例）  

    ```shell
    cd /path/to/python_files
    ```

4. 実行する  

    ```shell
    python3 ファイル名.py
    ```

</details>

## ディレクトリ構成

```
c/                           # C言語の練習コード  
├── 01/                      # 標準出力  
├── 02/                      # データ型  
├── 03/                      # 標準入力  
├── 04/                      # 演算子  
├── 05/                      # 条件分岐1  
├── 06/                      # 条件分岐2  
├── 07/                      # 乱数  
├── 08/                      # 繰り返し  
├── 09/                      # リスト  
├── 10/                      # 関数  
├── 11/                      # アドレスとポインタ  
├── 12/                      # 文字配列  
├── 13/                      # 構造体  
├── 14/                      # ファイル  
├── 15/                      # 複数ファイル  
├── bmi_calculator/          # BMI計算プログラム  
└── number_guessing_game/    # 数字当てゲーム  
  
javascript/                  # JavaScriptの練習コード  
├── english_exam/            # 英単語テストプログラム  
└── shuffle.js               # シャッフルプログラム  
  
python/                      # Pythonの練習コード  
├── 02-1.py                  # 演算子の練習  
├── 02-2.py                  # 身長予測プログラム1  
├── 02-3.py                  # 割り勘プログラム  
├── 03.py                    # 年齢分類プログラム  
├── 04-1_v1.py               # 星座判定プログラム version1  
├── 04-1_v2.py               # 星座判定プログラム version2  
├── 04-2.py                  # おみくじプログラム  
├── 05-1.py                  # 割り勘プログラム version2  
├── 05-2_v1.py               # 千羽鶴計算プログラム version1  
├── 05-2_v2.py               # 千羽鶴計算プログラム version2  
├── 05-3.py                  # 買い物計算プログラム  
├── 05-4.py                  # BMI計算プログラム  
├── 06-1.py                  # 月日計算プログラム  
├── 06-2_v1.py               # 繰り返し表示の練習1  
├── 06-2_v2.py               # 繰り返し表示の練習2  
├── 08_v1.py                 # シーザー暗号プログラム（1文字）  
├── 08_v2.py                 # シーザー暗号プログラム（単語を暗号化）  
├── 08_v3.py                 # シーザー暗号プログラム（単語を復号）  
├── 09-1.py                  # スコア計算プログラム1  
├── 09-2_v1.py               # シーザー暗号表 version1  
├── 09-2_v2.py               # シーザー暗号表 version2  
├── 10_v1.py                 # 身長予測プログラム2 version1  
├── 10_v2.py                 # 身長予測プログラム2 version2  
├── 11_v1.py                 # スコア計算プログラム2 version1  
├── 11_v2.py                 # スコア計算プログラム2 version2  
├── 12-1.py                  # クラスの練習1  
├── 12-2.py                  # クラスの練習2  
├── 13-1.py                  # スコア計算プログラム3  
├── 13-2.py                  # 面積計算プログラム  
├── calculator.py            # 四則演算プログラム
└── chatbot.py               # チャットボット
```


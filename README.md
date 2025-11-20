Read this in English: [README.en.md](README.en.md)  

# Practice

学習用に作成した各種プログラムをまとめたリポジトリです。

### 目次
- [Practice](#practice)
    - [目次](#目次)
  - [概要](#概要)
  - [注目のプログラム](#注目のプログラム)
    - [BMI計算プログラム](#bmi計算プログラム)
    - [数当てゲーム （おすすめ）](#数当てゲーム-おすすめ)
    - [星座判定プログラム](#星座判定プログラム)
    - [ToDoアプリ](#todoアプリ)
    - [英単語クイズ](#英単語クイズ)
  - [実行方法](#実行方法)
    - [Windows](#windows)
    - [macOS](#macos)
  - [ディレクトリ構成](#ディレクトリ構成)
  - [索引](#索引)
    - [C言語基礎](#c言語基礎)
    - [C言語応用](#c言語応用)
    - [JavaScript](#javascript)
    - [Python基礎](#python基礎)
    - [Python応用](#python応用)

## 概要

このリポジトリは、学習で作成した小規模なコードをまとめたものです。  
各ファイルは基本的に単体で完結しており、コマンドラインから直接実行できるシンプルなプログラムです。  

## 注目のプログラム

### [BMI計算プログラム](c/bmi_calculator/v5.c)  
- ユーザーの入力した身長・体重に基づいて、BMI（体格指数）を計算します  
- ユーザーが16歳以下の場合、RI（ローレル指数）を計算します  
- C言語で記述しています  

### [数当てゲーム](c/number_guessing_game/v5.c) （おすすめ）  
- 限られた範囲から選ばれるランダムな数字を当てるゲームです  
- 4つの難易度に分かれています  
- C言語で記述しています  

### [星座判定プログラム](python/04-1_v2.py)  
- ユーザーの入力した誕生日に基づいて、星座を判定します  
- 簡単なWebアプリにしたものを別のリポジトリに公開しています（[星座判定アプリ](https://github.com/kotonekanno/zodiac-checker)）  
- Pythonで記述しています  

### [ToDoアプリ](python/todo/)
- このリポジトリ内で最も規模の大きいプログラムです
- ただし、開発の過程でいくつかバグが発生しており、特にv4は不完全な状態となっています  
- バージョンごとに段階的に機能を追加しています  
    - v0：基本的な機能のみ  
    - v1：締め切りを設定できるように改良  
    - v2：優先順位を設定できるように改良  
    - v3：編集機能を追加（バグあり）  
- Pythonで記述しています  

### [英単語クイズ](javascript/english_exam/)  
- プログラミングに関連する英単語のクイズです  
- バージョンごとに異なる機能があります  
	- v0：正解／不正解と点数を表示  
	- v1：点数の後に間違えた単語を表示  
	- v2：点数に応じてメッセージを表示  
	- v3：「**hint**」と入力するとヒントを表示  
- JavaScriptで記述しています  

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
practice/
├── c/                  # C言語の練習コード（基礎）
├── c_advanced/         # C言語の練習コード（応用）
├── javascript/         # JavaScript
├── python/             # Pythonの練習コード（基礎）
├── python_advanced/    # Pythonの練習コード（応用）
```

## 索引

### [C言語基礎](c/)

1. [標準出力](c/01/)
2. [データ型](c/02/)
3. [標準入力](c/03/)
4. [演算子](c/04/)
5. [条件分岐1](c/05/)
6. [条件分岐2](c/06/)
7. [乱数](c/07/)
8. [繰り返し](c/08/)
9. [リスト](c/09/)
10. [関数](c/10/)
11. [アドレスとポインタ](c/11/)
12. [文字配列](c/12/)
13. [構造体](c/13/)
14. [ファイル](c/14/)
15. [複数ファイル](c/15/)
<br>  

- [BMI計算プログラム](c/bmi_calculator/)
- [数字当てゲーム](c/number_guessing_game/)

### [C言語応用](c_advanced/)

C言語で記述した各種アルゴリズム
<br>

1. データの検索
   - 線形探索
     - [Version 1](c_advanced/2-1_linear_search.c)
     - [Version 2](c_advanced/2-2_sentinel_search.c)："番人"の利用による効率化
     - [ID・名前検索](c_advanced/2-3.c)：
   - [二分探索](c_advanced/3-1_binary_search.c)
   - 探索アルゴリズムの比較
     - [比較1](c_advanced/3-2_search_comparison.c)
     - [比較2](c_advanced/3-3_prime_search.c)：素数の検索
2. データの並べ替え（単純）
   - 交換ソート
     - バブルソート
       - [Version 1](c_advanced/4-1_bubble_sort.c)
       - [Version 2](c_advanced/4-2_bubble_sort_ver2.c)
     - [コムソート](c_advanced/4-3_comb_sort.c)
     - [交換ソートの比較](c_advanced/4-4.c)
   - 挿入ソート
     - 基本挿入法
       - [Version 1](c_advanced/5-1_insertion_sort.c)
       - [Version 2](c_advanced/5-2_insertion_sort_ver2.c)
     - シェルソート
       - [Version 1](c_advanced/5-3_shell_sort.c)
       - [Version 2](c_advanced/5-4_shell_sort_ver2.c)
     - [挿入ソートの比較](c_advanced/5-5_insertion_sort_comparison.c)
   - 選択ソート
     - 基本選択法
       - [Version 1](c_advanced/6-1_selection_sort.c)
       - [Version 2](c_advanced/6-2_selection_sort_ver2.c)
   - 基本挿入法と基本選択法の比較(c_advanced/6-3_comparison.c)
     - [比較](c_advanced/6-3_comparison.c)
   - 構造体を利用したレコードの並べ替え
       - [基本選択法](c_advanced/6-4_selection_sort_student.c)
       - [基本挿入法1](c_advanced/6-5_insertion_sort_student.c)
       - [基本挿入法2](c_advanced/6-6_insertion_sort_student_pointer.c)

### [JavaScript](javascript/)

- [英単語クイズプログラム](javascript/english_exam/)
  - [Version 0](javascript/english_exam/english_exam_v0.js)：基本バージョン
  - [Version 1](javascript/english_exam/english_exam_v1.js)：間違えた単語を表示
  - [Version 2](javascript/english_exam/english_exam_v2.js)：スコアに応じたメッセージを表示
  - [Version 3](javascript/english_exam/english_exam_v3.js)：ヒントを表示
- [シャッフルプログラム](javascript/shuffle.js)

### [Python基礎](python/)

1. 演算子
   - [演算子の練習](python/02-1.py)
   - [身長予測プログラム1](python/02-2.py)
   - [割り勘プログラム](python/02-3.py)
2. 条件分岐   
   - if文
     - [年齢分類プログラム](python/03.py)
     - [おみくじプログラム](python/04-2.py)
   - match文
     - [星座判定プログラム version1](python/04-1_v1.py)
     - [星座判定プログラム version2](python/04-1_v2.py)
3. 繰り返し
   - while文
     - [割り勘プログラム version2](python/05-1.py)
     - [千羽鶴計算プログラム version1](python/05-2_v1.py)
     - [千羽鶴計算プログラム version2](python/05-2_v2.py)
     - [買い物計算プログラム](python/05-3.py)
     - [BMI計算プログラム](python/05-4.py)
   - for文
     - [月日計算プログラム](python/06-1.py)
     - [繰り返し表示の練習1](python/06-2_v1.py)
     - [繰り返し表示の練習2](python/06-2_v2.py)
4. 配列
   - [シーザー暗号プログラム1](python/08_v1.py)：1文字
   - [シーザー暗号プログラム2](python/08_v2.py)：単語を暗号化
   - [シーザー暗号プログラム3](python/08_v3.py)：単語を復号
   - [スコア計算プログラム1](python/09-1.py)
   - [シーザー暗号表 version1](python/09-2_v1.py)
   - [シーザー暗号表 version2](python/09-2_v2.py)
5. 関数
   - [身長予測プログラム2 version1](python/10_v1.py)
   - [身長予測プログラム2 version2](python/10_v2.py)
   - [スコア計算プログラム2 version1](python/11_v1.py)
   - [スコア計算プログラム2 version2](python/11_v2.py)
6. クラス
   - [クラスの練習1](python/12-1.py)
   - [クラスの練習2](python/12-2.py)
   - [スコア計算プログラム3](python/13-1.py)
   - [面積計算プログラム](python/13-2.py)
<br>

- [四則演算プログラム](python/calculator.py)
- [チャットボット](python/chatbot.py)
- [ToDoアプリ](python/todo/)
  - [Version 0](python/todo/todo_v0.py)：基本バージョン
  - [Version 1](python/todo/todo_v1.py)：締め切り設定機能を追加
  - [Version 2](python/todo/todo_v2.py)：優先順位機能を追加
  - [Version 3](python/todo/todo_v3.py)：編集機能を追加

### [Python応用](python_advanced/)

ライブラリを活用したPythonプログラム  

<br>
※ローカル環境では実行できない形式になっています。
推奨される実行環境：Google Colab

<details>
<summary>実行方法</summary>

1. [Google Colabを開く](https://colab.research.google.com/)  
2. 左下の「ノードブックを新規作成」を選択
3. 実行したいコードをコピー＆ペースト
4. 左上の実行ボタンから実行
</details>

<br>

1. GUI：ipywidgets
   - [スライダー](python_advanced/3_slider.py)
   - [英単語クイズ](python_advanced/3_word_quiz.py)
2. データの可視化：Matplotlib
   - [迷路ゲーム](python_advanced/6_maze.py)
   - [漢字クイズ](python_advanced/6_word_quiz.py)
3. 自然言語処理
   - 形態素解析：Janome
     - [日本語の解析](python_advanced/7-1_kokoro.py)
   - ワードクラウド：WordCloud
     - [英語で作成](python_advanced/7-2_word_cloud1.py)
     - [日本語で作成](python_advanced/7-2_word_cloud2.py)
     - [日本語・名詞のみで作成](python_advanced/7-2_word_cloud3.py)
     - [日本語・形容詞のみで作成](python_advanced/7-2_word_cloud4.py)
   - 文章のベクトル化（数値化）：
     - BoW
       - [英語](python_advanced/7-3_bow1.py)
       - [日本語](python_advanced/7-3_bow2.py)
       - [類似度の計算](python_advanced/7-3_bow3.py)
     - TF-IDF：単語の重要度計算
       - [日本語](python_advanced/7-4_tfidf1.py)
       - [類似度の計算](python_advanced/7-4_tfidf2.py)
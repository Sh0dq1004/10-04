#include <iostream>
#include <vector>
#include <string>
// 1. 必要なヘッダーファイルをincludeする

int main() {
  // 2.vectorを宣言する．
  std::vector<std::string> nutrients{"protain","fat","carbohydrate"};
  std::vector<double> goal_intake{65.0,25.0,55.0};
  std::vector<double> user_intake(3);
  std::vector<double> lacking_intake(3);



  // 3.文字列変数nameを作成・nameを表示
  std::string name;
  name = nutrients[0] + " " + nutrients[1] + " " + nutrients[2] + " " + "system";
  std::cout << name << ".\n";
  std::cout << "Please input the nutrients you have consumed.\n";


  // 4．ユーザーのキーボード入力
  double x{}, y{}, z{};
  std::cout << "input your " << nutrients[0] <<" intake: ";
  std::cin >> x;
  std::cout << "input your " << nutrients[1] <<" intake: ";
  std::cin >> y;
  std::cout << "input your " << nutrients[2] <<" intake: ";
  std::cin >> z;

  // 4の空欄箇所

  user_intake[0] = x;
  user_intake[1] = y;
  user_intake[2] = z;


  // 5.不足している栄養の計算
  if (goal_intake[0] <= user_intake[0]) lacking_intake[0] = 0;
  else lacking_intake[0] = goal_intake[0]-user_intake[0];
  if (goal_intake[1] <= user_intake[1]) lacking_intake[1] = 0;
  else lacking_intake[1] = goal_intake[1]-user_intake[1];
  if (goal_intake[2] <= user_intake[2]) lacking_intake[2] = 0;
  else lacking_intake[2] = goal_intake[2]-user_intake[2];


  // 6．不足している栄養素の出力を行う．
  std::cout << "-----------"
            << " lacking nutrients "
            << "-----------\n";
  std::cout << nutrients[0] << ": " << lacking_intake[0] << "\n"
            << nutrients[1] << ": " << lacking_intake[1] << "\n"
            << nutrients[2] << ": " << lacking_intake[2] << "\n";
  // 6の空欄箇所
  std::cout << "-----------------------------------------\n";

  return 0;
}

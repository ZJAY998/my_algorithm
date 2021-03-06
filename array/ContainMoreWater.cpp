/*
给你 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点 (i, ai) 。在坐标内画 n 条垂直线，垂直线 i 的两个端点分别为 (i, ai) 和 (i, 0) 。找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。

说明：你不能倾斜容器。

输入：[1,8,6,2,5,4,8,3,7]
输出：49 
解释：图中垂直线代表输入数组 [1,8,6,2,5,4,8,3,7]。在此情况下，容器能够容纳水（表示为蓝色部分）的最大值为 49。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/container-with-most-water
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/



void soultion_containMoreWater::max_area(vector<int>& height){


    int maxValue = 0;

    //O (n^2)

    /*
    for (int  i= 0; i < height.size()-1; ++i) {
        for (int j = i+1; j < height.size(); ++j) {

            int countValue = (j - i) * min(height[i],height[j]);
            maxValue = max(maxValue,countValue);
        }
    }
    */



    //O(n)
    int i = 0;
    int j = height.size() -1;


    while(i < j){

        int minheight = height[i] < height[j] ? height[i++]:height[j--];
        maxValue = max(maxValue,(j-i+1)*minheight);
    }



    cout << "j:"<<j;
/*
    while(i < j){

        int countValue = (j-i)*min(height[i],height[j]);
        maxValue = max(maxValue,countValue);

        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }

    }
*/


    cout<< "maxValue:"<< maxValue <<endl;
}


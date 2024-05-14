//Question 1.
//Consider that we have a “pop-star” program. A two-dimensional integer array holds the scores
//for different features of each candidate. At each step, these numbers are evaluated and the
//candidate with the smallest score is eliminated. There will ALWAYS be 4 candidates and the
//number of features will ALWAYS be 5.
//Write a function that eliminates one candidate and returns its index value in the 2D array.
//int eliminateCandidates(int[][] candidates)
//Input
//2 3 4 9 6
//1 0 1 2 1
//5 2 4 8 6
//3 6 7 3 1
//Output 2

//Question 2.
//Update your eliminateCandidates function in such a way that, for successive calls, it should
//eliminate candidates one by one
//So, in the main method you should call the eliminateCandidates like below:
//c1=eliminateCandidates(candidates);
//c2=eliminateCandidates(candidates);
//c3=eliminateCandidates(candidates);
//Input
//2 3 4 9 6
//1 0 1 2 1
//5 2 4 8 6
//3 6 7 3 1
//Output
//2
//4
//1

#include <iostream>

int eliminateCandidates(int scores[][5])
{
    int score_total[4];

    for (int candidate_i = 0; candidate_i < 4; ++candidate_i)

    {
        score_total[candidate_i] = 0;

        for (int feature_i = 0; feature_i < 5; ++feature_i)
        {
            score_total[candidate_i] += scores[candidate_i][feature_i];
        }
    }

    int minScore = score_total[0];
    int min_i = 0;
    for (int i = 1; i < 4; ++i)
    {
        if(score_total[i] < minScore)
        {
            minScore = score_total[i];
            min_i = i;
        }
    }

    return min_i + 1;
}

int eliminateCandidates_v2(int scores[][5]) //find a way that doesn't change the values of scores[][]
{
    int score_total[5];

    for (int candidate_i = 0; candidate_i < 4; ++candidate_i)

    {
        score_total[candidate_i] = 0;

        for (int feature_i = 0; feature_i < 5; ++feature_i)
        {
            score_total[candidate_i] += scores[candidate_i][feature_i];
        }
    }

    int minScore = score_total[0];
    int min_i = 0;
    for (int i = 1; i < 4; ++i)
    {
        if(score_total[i] < minScore)
        {
            minScore = score_total[i];
            min_i = i;
        }
    }

    scores[min_i][0] = score_total[0] + score_total[1] + score_total[2] +
                       score_total[3];

    return min_i + 1;
}

int main()
{
    int scores[4][5];
    for (int candidate_i = 0; candidate_i < 4; ++candidate_i)
    {
        for (int feature_i = 0; feature_i < 5; ++feature_i)
        {
            std::cin >> scores[candidate_i][feature_i];
        }
    }

    std::cout << eliminateCandidates_v2(scores) << std::endl;
    std::cout << eliminateCandidates_v2(scores) << std::endl;
    std::cout << eliminateCandidates_v2(scores) << std::endl;
    std::cout << eliminateCandidates_v2(scores) << std::endl;

    return 0;
}
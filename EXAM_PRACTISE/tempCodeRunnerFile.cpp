    int counter1 = counter(arr);
    int counter2 = counter1;

    for (int i = 0; i < counter1; i++)
    {
        int counter = 0;

        for (int j = 1; j < counter1; j++)
        {
            if (arr[i] == arr[j])
                counter++;
            continue;
        }

        cout << arr[i] << " " << counter << endl;
    }
}
    vector<long long> a(n), b(m);

    long long a0 = 0;
    long long b0 = 0;

    long long a_sum = 0;
    long long b_sum = 0;

    for(long long &x: a){
        cin >> x;
        if(x == 0)a0++;
        a_sum += x;
    }

    for(long long &x: b){
        cin >> x;
        if(x == 0)b0++;
        b_sum += x;
    }

    if(!a0 and !b0){
        // a, b has no zeroes
        if(a_sum == b_sum)cout << a_sum << endl;
        else cout << -1 << endl;
    }

    else if(a0 and !b0){
        // a has some zeroes, but b doesn't
        if(a_sum+a0 <= b_sum){
            cout << b_sum << endl;
        }
        else cout << -1 << endl;
    }

    else if(!a0 and b0){
        // b has some zeroes, but a doesn't
        if(b_sum+b0 <= a_sum){
            cout << a_sum << endl;
        }
        else cout << -1 << endl;
    }

    else{
        // a and b both has zeroes
        cout << max(a0+a_sum, b0+b_sum) << endl;
    }

    return 0;

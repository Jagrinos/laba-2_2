class ispalindrom
{
public:
	int checkpalindrom(char sl[20])
	{
		raz = 0;
		for (int i0 = 0; i0 < 20; i0++)
			if (isdigit(sl[i0]))
				raz += 1;
		for (int i1 = 0; i1 < raz; i1++)
			slovo[i1] = sl[i1];

		if (slovo[0] == '-')
			fl = 0;

		razafter = raz / 2;

		for (int i3 = 0; i3 < razafter; i3++)
			left[i3] = slovo[i3];

		int i4 = raz - razafter;
		int i5 = 0;
		while (i4 < raz)
		{
			right[i5] = slovo[i4];
			i4++;
			i5++;
		}

		int i6 = 0;
		int i7 = razafter - 1;
		while (i6 < i7)
		{
			safe[0] = right[i6];
			right[i6] = right[i7];
			right[i7] = safe[0];
			i6++;
			i7--;
		}
		for (int i8 = 0; i8 < razafter; i8++)
			if (left[i8] != right[i8])
				fl = 0;

		if (fl)
			return 1;
		else
			return 0;
	}

private:
	char slovo[20], left[10], right[10], safe[1];
	int raz, razafter;
	int fl = 1;
};

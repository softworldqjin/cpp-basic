unsigned int GetLength(const wchar_t* _pStr)
{
	int i = 0;
	int count = 0;

	while (true)
	{
		if ('\0' == _pStr[i])
		{
			++count;
			++i;
		}
		else
		{
			break;
		}
	}
	return count;
}

int main()
{
	wchar_t ssName[10] = L"Raimond";
	int iiLen = GetLength(ssName);

	return 0;

}
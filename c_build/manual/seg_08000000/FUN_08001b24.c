void FUN_08001b24(int param_1)
{
  *(unsigned short *)0x04000200 = *(unsigned short *)(param_1 + 0x20);
  FUN_08127df0();
}

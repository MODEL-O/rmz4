// undefined FUN_0802c24c(void)
// entry 0x802c24c


ulonglong FUN_0802c24c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  iVar2 = (*(int *)(param_1 + 0x58) + (int)*(short *)(param_2 + 2)) -
          ((int)((uint)*(ushort *)(param_2 + 6) << 0x10) >> 0x11);
  if ((*(char *)(param_1 + 0x1b8) != '\0') &&
     (((uVar1 = FUN_0802e058(param_1,*(undefined4 *)(param_1 + 0x54),iVar2), (uVar1 & 0x8000) == 0
       || ((uVar1 & 0xf) == 0)) || (0xe < (uVar1 & 0xf))))) {
    FUN_0802dd54(param_1,*(undefined4 *)(param_1 + 0x54),iVar2,auStack_18);
  }
  uVar1 = FUN_08007020(*(undefined4 *)(param_1 + 0x54),iVar2);
  if (((uVar1 & 0xf) == 1) && ((uVar1 & 0x8000) == 0)) {
    iVar2 = FUN_08008080(*(undefined4 *)(param_1 + 0x54),iVar2);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000ffff;
}



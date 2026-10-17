// undefined FUN_080b6ee4(void)
// entry 0x80b6ee4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080b6ee4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080b6fa0);
    FUN_0801cf00(param_1,_FUN_080b6fa4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_28 = *(undefined4 *)(param_1 + 0x54);
    uVar1 = 0;
    iVar2 = iRam080b6fa8;
    do {
      local_24 = *(int *)(param_1 + 0x58) + iVar2;
      FUN_080b6b54(param_1,&local_28,uVar1 & 0xff);
      iVar2 = iVar2 + 0x1800;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 3);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)((uint)*(byte *)(param_1 + 9) * 4 + 0x885db40) + 0xc);
  }
  return in_lr;
}



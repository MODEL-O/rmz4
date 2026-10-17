// undefined FUN_0809a580(void)
// entry 0x809a580


undefined4 FUN_0809a580(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    if (*(int *)(param_1 + 0xb8) < iVar2) {
      iVar2 = param_1 + 0x54;
      FUN_08099e6c(iVar2,2,0,0);
      FUN_08099e6c(iVar2,2,1,0);
      FUN_08099e6c(iVar2,2,2,0);
      FUN_08099e6c(iVar2,2,3,1);
      FUN_08099e6c(iVar2,2,4,1);
      FUN_08099e6c(iVar2,2,5,1);
      FUN_0801cf00(param_1,DAT_0809a678);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809a5cc);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
    return in_lr;
  }
  FUN_0801cff0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809a67c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08099ff4(param_1);
  }
  return in_lr;
}



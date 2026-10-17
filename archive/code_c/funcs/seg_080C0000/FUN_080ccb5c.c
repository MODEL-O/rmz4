// undefined FUN_080ccb5c(void)
// entry 0x80ccb5c


undefined4 FUN_080ccb5c(int param_1)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  uVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x400);
  if (((*(int *)(param_1 + 0x60) != 0) && ((uVar1 & 0x8000) == 0)) && (uVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080ccc34);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x400;
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_080e2914(param_1 + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ccc38);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  uVar3 = FUN_0801fb14(DAT_080ccc3c,param_1 + 0x54);
  if (0x4000 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ccc38);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}



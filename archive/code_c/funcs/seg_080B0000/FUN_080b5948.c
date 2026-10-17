// undefined FUN_080b5948(void)
// entry 0x80b5948


undefined4 FUN_080b5948(int param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080b59a4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58);
  sVar1 = FUN_08007c7c(iVar4,iVar5);
  if (sVar1 == 0) {
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = iVar5;
    uVar3 = FUN_0801fb14(DAT_080b59fc,param_1 + 0x54);
    if (0x1000 < uVar3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b5a00);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b59a8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_080b5ad4(param_1);
  }
  return in_lr;
}



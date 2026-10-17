// undefined FUN_080be688(void)
// entry 0x80be688


undefined4 FUN_080be688(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080be6ec);
    uVar5 = DAT_080be6f0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = 0x280;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  uVar1 = FUN_08007c7c(iVar2,*(undefined4 *)(param_1 + 0x58));
  if ((uVar1 == 0) || ((uVar1 & 0x8000) != 0)) {
    uVar3 = FUN_0801fb14(DAT_080be720,param_1 + 0x54);
    if (uVar3 < 0x1001) {
      return in_lr;
    }
  }
  else {
    FUN_080d0c88(3,param_1 + 0x54);
  }
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080be724);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  return in_lr;
}



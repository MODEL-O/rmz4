// undefined FUN_080b08fc(void)
// entry 0x80b08fc


undefined4 FUN_080b08fc(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  uVar1 = DAT_080b0978;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = DAT_080b0978;
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x11) * 0x18 + DAT_080b097c);
    if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080b0980 + 0x54)) {
      iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = FUN_08007c7c();
  if (sVar2 != 0) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b0984);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  return in_lr;
}



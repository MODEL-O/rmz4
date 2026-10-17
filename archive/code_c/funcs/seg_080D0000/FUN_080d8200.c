// undefined FUN_080d8200(void)
// entry 0x80d8200


undefined4 FUN_080d8200(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x74) + -1;
  *(int *)(param_1 + 0x74) = iVar2;
  if (iVar2 == 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8228);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080d82c4(param_1);
    return in_lr;
  }
  uVar4 = FUN_0801fb14(DAT_080d8260,param_1 + 0x54);
  if (0x2000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8264);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    return in_lr;
  }
  uVar4 = *(uint *)(param_1 + 0x74);
  if ((int)uVar4 < 0x18) {
    if ((uVar4 & 3) == 0) {
LAB_080d8292:
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    if (0x2f < (int)uVar4) goto LAB_080d829a;
    if ((uVar4 & 1) == 0) goto LAB_080d8292;
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080d829a:
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  return in_lr;
}



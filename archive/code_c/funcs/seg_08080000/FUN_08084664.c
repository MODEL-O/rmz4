// undefined FUN_08084664(void)
// entry 0x8084664


undefined4 FUN_08084664(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080846b4);
    FUN_080d6e54(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 != 0) {
    if (*(byte *)(iVar3 + 0xc) < 2) {
      *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + DAT_080846e8;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      return in_lr;
    }
  }
  iVar3 = param_1 + 0x54;
  bVar4 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar4 = bVar4 | 0x10;
  }
  FUN_080d4c8c(iVar3,DAT_080846ec,0,bVar4);
  bVar4 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar4 = bVar4 | 0x10;
  }
  FUN_080d4c8c(iVar3,DAT_08084714,0,bVar4);
  FUN_080d0c88(1,iVar3);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    FUN_080d0c88(2,iVar3);
  }
  else {
    FUN_080d0c88(2,iVar3);
  }
  FUN_0802ab88(4,0x12,iVar3);
  FUN_08002b10(0x2a);
  if (*(ushort *)(DAT_0808478c + 0xc) <= DAT_08084790) {
    *(ushort *)(DAT_0808478c + 0xc) = *(ushort *)(DAT_0808478c + 0xc) + 1;
  }
  FUN_0802abe0(param_1,iVar3);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08084794);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}



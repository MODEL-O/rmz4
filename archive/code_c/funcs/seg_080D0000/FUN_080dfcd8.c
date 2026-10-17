// undefined FUN_080dfcd8(void)
// entry 0x80dfcd8


undefined4 FUN_080dfcd8(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  FUN_0801cff0();
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080dfd70));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 1;
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == -1) {
    bVar3 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar3;
    *(byte *)(param_1 + 0x13) = bVar3;
    if (bVar3 < 8) {
      *(byte *)(param_1 + 10) = bVar1 & 0xfe;
    }
  }
  uVar4 = FUN_0801fb14(DAT_080dfd74,param_1 + 0x54);
  if ((0x2000 < uVar4) || (*(char *)(param_1 + 0x12) == '\0')) {
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dfd78);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
    FUN_080dfd7c(param_1);
  }
  return in_lr;
}



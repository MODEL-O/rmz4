// undefined FUN_080a7a80(void)
// entry 0x80a7a80


undefined4 FUN_080a7a80(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\x04') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a7ab0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080a7b0c(param_1);
  }
  else {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      uVar3 = FUN_08128fb8((0x50 - (uint)*(byte *)(param_1 + 0x12)) * 0x40,0x50);
      iVar4 = (int)*(short *)((uVar3 & 0xff) * 2 + DAT_080a7b08);
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) + ((bVar1 >> 4 & 1) * 2 + -1) * -6 * iVar4
      ;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + iVar4 * 0xc;
    }
  }
  return in_lr;
}



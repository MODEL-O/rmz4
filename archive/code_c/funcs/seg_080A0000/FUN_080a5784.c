// undefined FUN_080a5784(void)
// entry 0x80a5784


undefined4 FUN_080a5784(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080a5810);
    FUN_0801d3d0(param_1,0xe);
    FUN_0801cf00(param_1,DAT_080a5814);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) ||
       (sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       sVar2 == 0)) ||
      (uVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
      (uVar3 & 0xf) == 0xf)) ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a5818);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080a581c(param_1);
  }
  return in_lr;
}



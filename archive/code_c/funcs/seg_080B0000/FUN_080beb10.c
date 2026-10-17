// undefined FUN_080beb10(void)
// entry 0x80beb10


undefined4 FUN_080beb10(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  piVar1 = DAT_080beb98;
  iVar6 = *(int *)(param_1 + 0xb4);
  iVar5 = *DAT_080beb98;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080beb9c);
    FUN_08005784(param_1 + 0x74,DAT_080beba0);
    *(undefined4 *)(param_1 + 100) = 0xff;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar3 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar3;
  if ((((*(byte *)(iVar6 + 0xc) < 2) && (0 < iVar3)) && ((*(uint *)(param_1 + 0x8c) & 0x800) != 0))
     && ((iVar5 != 0 && ((*(uint *)(iVar5 + 0x8c) & 1) == 0)))) {
    iVar6 = *piVar1;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
    iVar6 = DAT_080bebd0;
    *(undefined1 *)(iVar5 + DAT_080bebd0) = 1;
    *(undefined1 *)(iVar5 + iVar6 + 1) = 0;
    uVar4 = *(uint *)(param_1 + 100);
    if ((int)uVar4 < 0x3c) {
      if ((int)uVar4 < 0x1e) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
      if ((uVar4 & uVar2) == 0) {
        return in_lr;
      }
    }
    *(undefined1 *)(iVar5 + DAT_080bebec) = 1;
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080beba4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080bebf0(param_1);
  }
  return in_lr;
}



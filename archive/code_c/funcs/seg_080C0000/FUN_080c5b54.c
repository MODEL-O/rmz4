// undefined FUN_080c5b54(void)
// entry 0x80c5b54


undefined4 FUN_080c5b54(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  bool bVar7;
  
  iVar6 = *DAT_080c5c10;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x40);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_08005784(param_1 + 0x74,DAT_080c5c14);
    FUN_0801cf00(param_1,0x5600);
    *(undefined4 *)(param_1 + 100) = 300;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar3;
  iVar1 = DAT_080c5c40;
  if ((((*(uint *)(param_1 + 0x8c) & 0x800) == 0) || (iVar6 == 0)) ||
     (bVar7 = (*(uint *)(iVar6 + 0x8c) & 1) != 0, bVar7 || iVar3 == 0)) {
    FUN_08002b10(0x3f);
    FUN_080c5fb8(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c5c18);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
    return in_lr;
  }
  *(undefined1 *)(iVar6 + DAT_080c5c40) = 1;
  *(bool *)(iVar6 + iVar1 + 1) = bVar7 || iVar3 == 0;
  uVar5 = *(uint *)(param_1 + 100);
  if ((int)uVar5 < 0x4b) {
    if ((uVar5 & 1) != 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080c5c58;
    }
  }
  else if ((uVar5 & 3) != 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
    goto LAB_080c5c58;
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080c5c58:
  *(byte *)(param_1 + 10) = bVar2;
  iVar6 = *DAT_080c5c6c;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
  return in_lr;
}



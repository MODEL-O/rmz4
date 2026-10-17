// undefined FUN_080a4df0(void)
// entry 0x80a4df0


undefined4 FUN_080a4df0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  bool bVar6;
  
  iVar5 = *DAT_080a4e9c;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x40);
    FUN_080a5448(param_1);
    FUN_08005784(param_1 + 0x74,DAT_080a4ea0);
    *(undefined1 *)(param_1 + 0x25) = 0xf;
    FUN_0801cf00(param_1,0x2200);
    *(undefined4 *)(param_1 + 0xb8) = 300;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  puVar4 = (uint *)(param_1 + 0xb8);
  uVar2 = *puVar4 - 1;
  *puVar4 = uVar2;
  if ((((*(uint *)(param_1 + 0x8c) & 0x800) == 0) || (iVar5 == 0)) ||
     (bVar6 = (*(uint *)(iVar5 + 0x8c) & 1) != 0, bVar6 || uVar2 == 0)) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a4ea4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_080a5188(param_1);
    return in_lr;
  }
  *(undefined1 *)(iVar5 + DAT_080a4ed0) = 1;
  *(bool *)(iVar5 + 0x172) = bVar6 || uVar2 == 0;
  uVar2 = *puVar4;
  if ((int)uVar2 < 0x4b) {
    if ((uVar2 & 1) != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080a4ee8;
    }
  }
  else if ((uVar2 & 3) != 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
    goto LAB_080a4ee8;
  }
  bVar1 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080a4ee8:
  *(byte *)(param_1 + 10) = bVar1;
  iVar5 = *DAT_080a4efc;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
  return in_lr;
}



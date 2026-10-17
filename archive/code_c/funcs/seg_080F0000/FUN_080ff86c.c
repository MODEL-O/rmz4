// undefined FUN_080ff86c(void)
// entry 0x80ff86c


undefined4 FUN_080ff86c(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    FUN_0801cff0(param_1);
    iVar6 = *(int *)(param_1 + 0x58);
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      iVar3 = *(int *)(param_1 + 0xb8) + (uint)*(ushort *)(DAT_080ff8f0 + DAT_080ff8f4) * 0x100;
      iVar5 = DAT_080ff8f0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb8) + (uint)*(ushort *)(DAT_080ff8c4 + DAT_080ff8c8) * -0x100;
      iVar5 = DAT_080ff8c4;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    uVar1 = *(ushort *)(iVar5 + DAT_080ff8f4);
    uVar4 = DAT_080ff8f8;
    if (((uVar1 < 0x10) || (uVar4 = DAT_080ff904, uVar1 < 0x20)) ||
       (uVar4 = DAT_080ff918, uVar1 < 0x30)) {
      FUN_0801cf00(param_1,uVar4);
    }
    else {
      FUN_0801cf00(param_1,DAT_080ff944);
    }
    FUN_0801cff0(param_1);
    if (iVar6 == *(int *)(param_1 + 0x58)) {
      *(undefined1 *)(param_1 + 0xbd) = 0;
    }
    else {
      if (*(char *)(param_1 + 0xbd) == '\0') {
        FUN_08002b10(0x78);
      }
      *(char *)(param_1 + 0xbd) = '\x01';
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ff898);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080ff168(param_1);
  }
  return in_lr;
}



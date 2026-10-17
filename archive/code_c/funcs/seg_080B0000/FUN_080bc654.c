// undefined FUN_080bc654(void)
// entry 0x80bc654


undefined4 FUN_080bc654(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  int iVar7;
  undefined4 in_lr;
  
  puVar6 = *(ushort **)(param_1 + 0x28);
  uVar5 = *puVar6 & ~(ushort)(1 << *(sbyte *)(param_1 + 0x10));
  *puVar6 = uVar5;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
      *puVar6 = uVar5 | 0x8000;
    }
    FUN_080d05c0(param_1 + 0x54,0,*(undefined4 *)(param_1 + 0x28));
    FUN_08002b10(0xa6);
    goto LAB_080bc766;
  }
  iVar7 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(*DAT_080bc6c8 + 0x54);
  bVar3 = iVar7 < iVar2;
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    uVar5 = 0x300;
    bVar3 = false;
  }
  else {
    iVar4 = iVar7 - iVar2;
    if (iVar4 < 0) {
      iVar4 = iVar2 - iVar7;
    }
    if ((uint)(iVar4 + DAT_080bc700) <= DAT_080bc704) {
      FUN_080e7d70(param_1 + 0x54,0,bVar3);
      FUN_08002b10(DAT_080bc708);
      **(ushort **)(param_1 + 0x28) = **(ushort **)(param_1 + 0x28) | 0x500;
      goto LAB_080bc766;
    }
    if (0x1e00 < iVar4) {
      if (DAT_080bc794 < iVar4) {
        FUN_080e7d70(param_1 + 0x54,0x100,bVar3);
        FUN_08002b10(DAT_080bc798);
        **(ushort **)(param_1 + 0x28) = **(ushort **)(param_1 + 0x28) | 0x200;
      }
      goto LAB_080bc766;
    }
    uVar5 = 0x200;
  }
  FUN_080e7d70(param_1 + 0x54,uVar5,bVar3);
  FUN_08002b10(DAT_080bc738);
  **(ushort **)(param_1 + 0x28) = uVar5 | **(ushort **)(param_1 + 0x28);
LAB_080bc766:
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bc79c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}



// undefined FUN_080cdb00(void)
// entry 0x80cdb00


undefined4 FUN_080cdb00(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(byte *)(param_1 + 0x10) < 2) {
LAB_080cdb44:
    uVar4 = 0xdc00;
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (9 < *(byte *)((uint)*(byte *)(param_1 + 0x10) + DAT_080cdb50)) {
        FUN_0801cf00(param_1,DAT_080cdbb4);
        goto LAB_080cdb5c;
      }
      goto LAB_080cdb44;
    }
    uVar4 = DAT_080cdb34;
    if (*(byte *)((uint)*(byte *)(param_1 + 0x10) + DAT_080cdb30) < 10) goto LAB_080cdb44;
  }
  FUN_0801cf00(param_1,uVar4);
LAB_080cdb5c:
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x5000;
  iVar1 = DAT_080cdbf8;
  iVar2 = DAT_080cdbb8;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(uint *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (uint)*(byte *)((uint)*(byte *)(param_1 + 0x10) + DAT_080cdbf8) * -0x100;
    iVar2 = (uint)*(byte *)((uint)*(byte *)(param_1 + 0x10) + iVar1) * -0x100;
  }
  else {
    *(uint *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (uint)*(byte *)((uint)*(byte *)(param_1 + 0x10) + DAT_080cdbb8) * 0x100;
    iVar2 = (uint)*(byte *)((uint)*(byte *)(param_1 + 0x10) + iVar2) << 8;
  }
  *(int *)(param_1 + 0x68) = iVar2;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cdbfc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080cdc00(param_1);
  return in_lr;
}



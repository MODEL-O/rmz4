// undefined FUN_081065d0(void)
// entry 0x81065d0


undefined4 FUN_081065d0(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar2 = false;
  if (*(byte *)(param_1 + 0xd) < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x081065e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(PTR_PTR_081065e8 + (uint)*(byte *)(param_1 + 0xd) * 4))();
    return uVar3;
  }
  if (((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) && (*(int *)(param_1 + 0x28) == 0)) {
    bVar2 = true;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (bVar2) {
      if (*(byte *)(param_1 + 0xd) < 8) {
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + DAT_081068d8;
        FUN_08002b10(0x3a);
      }
      else {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + DAT_08106924;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + DAT_08106928;
      }
      iVar4 = FUN_080d5074(param_1 + 100,1,0);
      *(int *)(param_1 + 0x28) = iVar4;
      *(undefined1 *)(iVar4 + 0x7c) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x74) = 0x1f;
      *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x75) = 0x1f;
      *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x76) = 0x1f;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
      *(undefined1 *)(param_1 + 0x11) = 0;
      *(undefined1 *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x11) = 0;
      *(undefined1 *)(param_1 + 0x13) = 0;
      FUN_08002b10(0x3a);
    }
    bVar1 = *(byte *)(param_1 + 0x11);
    if (((7 < *(byte *)(param_1 + 0xd)) && (bVar1 < 0x40)) ||
       (*(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01', bVar1 < 0x40)) {
      *(byte *)(param_1 + 0x11) = bVar1 + 8;
    }
    bVar1 = *(byte *)(param_1 + 0x13);
    if ((((bVar1 < 5) || ((bVar1 & 1) == 0)) && ((bVar1 < 9 || ((bVar1 & 3) == 0)))) &&
       ((bVar1 < 0x10 || ((bVar1 & 7) != 0)))) {
      if (*(byte *)(param_1 + 0xd) < 8) {
        *(int *)(*(int *)(param_1 + 0x28) + 0x78) =
             *(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_081069a4) * 0x30;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x28) + 0x78) =
             (int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_081069bc) << 6;
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
    }
    if (*(byte *)(param_1 + 0xd) < 8) {
      if (*(byte *)(param_1 + 0x13) < 0x31) {
        return in_lr;
      }
    }
    else if (*(byte *)(param_1 + 0x13) < 0x21) {
      return in_lr;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x77) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}



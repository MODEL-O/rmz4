// undefined FUN_080bfc44(void)
// entry 0x80bfc44


undefined4 FUN_080bfc44(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = true;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080bfc84);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(iVar5 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    iVar5 = DAT_080bfd14;
    if (DAT_080bfd14 < *(int *)(param_1 + 0x60)) {
      iVar4 = *(int *)(param_1 + 0x60) + -0x20;
      *(int *)(param_1 + 0x60) = iVar4;
      if (iVar4 < iVar5) {
        *(int *)(param_1 + 0x60) = iVar5;
      }
      bVar1 = false;
    }
    local_18 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = local_18;
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (((bVar2 & 3) == 0) && (bVar1)) {
      local_1c = *(undefined4 *)(param_1 + 0x54);
      local_18 = local_18 + 0x1c00;
      iVar5 = FUN_080d0c88(3,&local_1c);
      if (iVar5 != 0) {
        *(byte *)(iVar5 + 0x49) = *(byte *)(iVar5 + 0x49) | 0xc;
        *(undefined1 *)(iVar5 + 0x25) = 0x1c;
      }
    }
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb4) + DAT_080bfd18) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bfc88);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080bff80(param_1);
  }
  return in_lr;
}



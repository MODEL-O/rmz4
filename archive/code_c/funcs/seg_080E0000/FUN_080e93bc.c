// undefined FUN_080e93bc(void)
// entry 0x80e93bc


undefined4 FUN_080e93bc(int param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x78)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x78);
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        if (*(byte *)(param_1 + 0x11) < 4) {
          uVar1 = *(undefined4 *)(param_1 + 0x28);
          uVar4 = *(byte *)(param_1 + 0x11) + 1;
        }
        else {
          uVar1 = *(undefined4 *)(param_1 + 0x28);
          uVar4 = DAT_080e93f8;
        }
      }
      else if (*(byte *)(param_1 + 0x11) < 3) {
        uVar1 = *(undefined4 *)(param_1 + 0x28);
        uVar4 = *(byte *)(param_1 + 0x11) + 1 | 0x300;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x28);
        uVar4 = DAT_080e944c;
      }
      uVar1 = FUN_080e8dd8(uVar1,uVar4,*(undefined2 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      if (*(int *)(param_1 + 0x2c) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x7c) = *(undefined1 *)(param_1 + 0x7c);
      }
    }
  }
  puVar2 = (ushort *)(param_1 + 0x76);
  if (*puVar2 < 0x101) {
    *puVar2 = *puVar2 + 8;
  }
  else {
    *puVar2 = 0x100;
  }
  *(ushort *)(param_1 + 0x50) = 0x200 - *puVar2;
  *(ushort *)(param_1 + 0x52) = 0x200 - *puVar2;
  if (*(char *)(param_1 + 0x12) == '\0') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e9490);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}



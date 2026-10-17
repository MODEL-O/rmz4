// undefined FUN_08107ed8(void)
// entry 0x8107ed8


undefined4 FUN_08107ed8(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  pbVar5 = (byte *)(param_1 + 0xb5);
  iVar1 = iVar1 + DAT_08107f3c + (uint)*pbVar5 * -0x1800;
  if (*(int *)(param_1 + 0x58) + 0xc00 < iVar1) {
    if ((*pbVar5 == 0) || (iVar1 = *(int *)(param_1 + 0x28), iVar1 == 0)) {
      iVar1 = *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
      if (DAT_08108074 < iVar1) {
        return in_lr;
      }
      iVar1 = iVar1 + 0x20;
    }
    else {
      if (1 < *(byte *)(iVar1 + 0xc)) {
        *pbVar5 = *(byte *)(iVar1 + 0xb5);
        if (*(char *)(*(int *)(param_1 + 0x28) + 0xb4) == '\x01') {
          FUN_081080bc(param_1);
        }
        if (*(int *)(param_1 + 0x58) + 0xc00 <
            *(int *)(*(int *)(param_1 + 0x28) + 0x58) + DAT_0810805c) {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
        *(undefined1 *)(param_1 + 0xb6) = 1;
      }
      iVar1 = *(int *)(param_1 + 0x28);
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0xb6) == '\x01')) {
        *pbVar5 = *(char *)(iVar1 + 0xb5) + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x28) + 0xb6) = 0;
        *(undefined1 *)(param_1 + 0xb6) = 1;
      }
      if (*(int *)(param_1 + 0x60) <= DAT_081080a4) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
      }
      iVar1 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x58) + 0xc00 < *(int *)(iVar1 + 0x58) + DAT_081080a8) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        return in_lr;
      }
      if (*(char *)(iVar1 + 0xd) != '\x01') {
        return in_lr;
      }
      iVar1 = *(int *)(iVar1 + 0x60);
    }
    *(int *)(param_1 + 0x60) = iVar1;
    return in_lr;
  }
  *(int *)(param_1 + 0x58) = iVar1 + DAT_08107f40;
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0xd) != '\0') {
      uVar2 = *(byte *)(iVar1 + 0xb5) + 1;
      if (uVar2 == *pbVar5) {
        return in_lr;
      }
      *pbVar5 = (byte)uVar2;
      *(undefined1 *)(param_1 + 0xe) = 1;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x11) == *(char *)(iVar1 + 0x11)) {
      uVar2 = *(byte *)(iVar1 + 0xb5) + 1;
      if (uVar2 != *pbVar5) {
        *pbVar5 = (byte)uVar2;
        return in_lr;
      }
      FUN_08108104(param_1);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x28) + 0xe) = 0;
      iVar1 = DAT_08107fd8;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08107fd8);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      iVar4 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(iVar4 + 0xc) = 2;
      *(undefined4 *)(iVar4 + 0x14) =
           *(undefined4 *)(*(int *)((uint)*(byte *)(iVar4 + 9) * 4 + iVar1) + 8);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      iVar1 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined1 *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      *pbVar5 = *(byte *)(*(int *)(param_1 + 0x28) + 0xb5);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
      *(undefined1 *)(param_1 + 0xb7) = 1;
      FUN_081080bc(param_1);
      return in_lr;
    }
  }
  FUN_0810814c(param_1);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}



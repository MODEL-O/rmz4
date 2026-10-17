// undefined FUN_0801aef8(void)
// entry 0x801aef8


undefined4 FUN_0801aef8(int param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(DAT_0801af90 + 0x148) = 0x1e0;
    puVar2 = (ushort *)(DAT_0801af94 + 0x148);
    *puVar2 = 10;
    FUN_08001d30(DAT_0801af98 + 0xcd0,
                 (0x1e0 - (uint)(*(ushort *)(DAT_0801af98 + 0xcd6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0801af9c + 0xcd0,
                 ((uint)*puVar2 - (uint)*(byte *)(DAT_0801af9c + 0xcd7)) * 0x20 + 0x200);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0801afa4 < (uint)(*(int *)(param_1 + 0x34) + DAT_0801afa0)) {
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_080e954c();
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_080e954c();
      uVar1 = 0;
      goto LAB_0801afca;
    }
  }
  else {
    if (*(int *)(param_1 + 0x68) == 0) {
      uVar1 = FUN_080f83fc(DAT_0801afa8,0,3);
      *(undefined4 *)(param_1 + 0x68) = uVar1;
    }
    if (*(int *)(param_1 + 0x6c) == 0) {
      uVar1 = FUN_080f83fc(DAT_0801afac,0,3);
LAB_0801afca:
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
    }
  }
  if ((uint)(*(int *)(param_1 + 0x34) + DAT_0801b000) < 0x1df) {
    if (*(int *)(param_1 + 0x70) == 0) {
      uVar1 = FUN_080f83fc(DAT_0801b004,0,3);
      *(undefined4 *)(param_1 + 0x70) = uVar1;
    }
    if (*(int *)(param_1 + 0x74) != 0) goto LAB_0801b028;
    uVar1 = FUN_080f83fc(DAT_0801b008,0,3);
  }
  else {
    if (*(int *)(param_1 + 0x70) != 0) {
      FUN_080e954c();
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    if (*(int *)(param_1 + 0x74) == 0) goto LAB_0801b028;
    FUN_080e954c();
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar1;
LAB_0801b028:
  if (DAT_0801b05c < (uint)(*(int *)(param_1 + 0x34) + DAT_0801b058)) {
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_080e954c();
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      return in_lr;
    }
    FUN_080e954c();
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x78) == 0) {
      uVar1 = FUN_080f83fc(DAT_0801b060,0,3);
      *(undefined4 *)(param_1 + 0x78) = uVar1;
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      return in_lr;
    }
    uVar1 = FUN_080f83fc(DAT_0801b064,0,3);
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  return in_lr;
}



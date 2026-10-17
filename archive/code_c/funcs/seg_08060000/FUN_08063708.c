// undefined FUN_08063708(void)
// entry 0x8063708


undefined4 FUN_08063708(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar3 = FUN_08066190(param_1);
    FUN_080661b8(&local_24,param_1,uVar3);
    local_1c = local_24;
    local_18 = local_20;
    uVar5 = *DAT_08063788 * DAT_0806378c + DAT_08063790;
    *DAT_08063788 = uVar5 & 0x7fffffff;
    uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 1;
    FUN_08065a94(param_1,0x19);
    *(undefined4 *)(param_1 + 0x54) = local_1c;
    *(undefined4 *)(param_1 + 0x58) = local_18;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08063844) * 4 +
                               DAT_08063840)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08063848))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x13) != '\0') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    iVar4 = FUN_0809b734(param_1,&local_1c,0,uVar5);
    *(int *)(param_1 + 0xc4) = iVar4;
    if (iVar4 == 0) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}



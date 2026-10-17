// undefined FUN_08062e4c(void)
// entry 0x8062e4c


undefined4 FUN_08062e4c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined1 auStack_44 [32];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_08129258(auStack_44,DAT_08062eac,0x20);
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar3 = FUN_08066204(param_1);
    FUN_0806630c(&local_24,param_1,uVar3);
    local_1c = local_24;
    local_18 = local_20;
    bVar1 = ~(*(byte *)(*DAT_08062eb0 + 10) >> 4) & 1;
    iVar4 = FUN_0809b734(param_1,&local_1c,1,bVar1);
    *(int *)(param_1 + 0xc4) = iVar4;
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0xd) = 6;
      *(undefined1 *)(param_1 + 0xe) = 0;
      goto LAB_08062fbe;
    }
    FUN_08065a94(param_1,0x19);
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined4 *)(param_1 + 0x54) = local_1c;
    *(undefined4 *)(param_1 + 0x58) = local_18;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0x13) = (char)uVar3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08062fb0) * 4 +
                               DAT_08062fac)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08062fb4))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  uVar5 = FUN_0806635c(auStack_44 + (uint)*(byte *)(param_1 + 0x13) * 4,4);
  if ((int)uVar5 < 2) {
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = uVar5 + 1;
    }
    uVar5 = uVar5 & 1;
  }
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  iVar4 = FUN_0809ba34(param_1,&local_1c,uVar5 & 0xff);
  *(int *)(param_1 + 200) = iVar4;
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 6;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
LAB_08062fbe:
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}



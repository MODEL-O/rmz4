// undefined FUN_0807ce1c(void)
// entry 0x807ce1c


undefined4 FUN_0807ce1c(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  byte abStack_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_08129258(abStack_1c,DAT_0807ce70,2);
  bVar1 = *(byte *)(param_1 + 0xd5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *DAT_0807ce74 = 0;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
    if (*(int *)(param_1 + 0xd0) == 0) {
      *(undefined1 *)(param_1 + 0xe) = 0xd;
      *(undefined1 *)(param_1 + 0xf) = 0;
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807ce78));
      return in_lr;
    }
    FUN_0807e8c8(param_1,0);
    uVar4 = 0;
    uVar3 = 0;
    do {
      if ((int)uVar3 / 2 != (uint)bVar1) {
        uVar4 = uVar4 | 1 << (uVar3 & 0xff);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 8);
    *(uint *)(param_1 + 100) = uVar4;
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar3 = *(uint *)(param_1 + 100);
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807cf10) * 4 +
                        DAT_0807cf0c)));
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    if ((uVar3 & 0xff) == 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(char *)(param_1 + 0xf) = (char)uVar3;
      return in_lr;
    }
    local_18 = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x54);
    local_14 = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x58);
    for (uVar4 = (uint)abStack_1c[*(byte *)(param_1 + 0x13)]; ((int)uVar3 >> uVar4 & 1U) == 0;
        uVar4 = uVar4 + (uint)*(byte *)(param_1 + 0x13) * 2 + -1 & 0xff) {
    }
    FUN_080cf36c(param_1,&local_18,1,uVar4);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(byte *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + 1U & 1;
    uVar3 = uVar3 & ~(1 << uVar4);
  }
  *(uint *)(param_1 + 100) = uVar3;
  return in_lr;
}



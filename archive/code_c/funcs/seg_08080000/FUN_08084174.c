// undefined FUN_08084174(void)
// entry 0x8084174


undefined4 FUN_08084174(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x1c00);
    *(undefined1 *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_080841b0 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) +
       *(short *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_08084224) * 0x20;
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    uVar5 = *DAT_08084228 * DAT_0808422c + DAT_08084230;
    *DAT_08084228 = uVar5 & 0x7fffffff;
    if (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) < 10) {
      uVar4 = 3;
    }
    else {
      uVar4 = 5;
    }
    *(undefined1 *)(param_1 + 0xd) = uVar4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}



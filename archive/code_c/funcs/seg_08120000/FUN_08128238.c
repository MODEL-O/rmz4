// undefined FUN_08128238(void)
// entry 0x8128238


undefined4 FUN_08128238(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_1 + 3);
  if (bVar1 < bVar2) {
    if (bVar2 >> 1 < bVar1) goto LAB_08128264;
    *(undefined1 *)(param_1 + 0x1b) = 0xf0;
LAB_08128272:
    uVar4 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4;
    *(char *)(param_1 + 10) = (char)uVar4;
    if (uVar4 < 0x10) goto LAB_08128284;
    uVar3 = 0xf;
  }
  else {
    if (bVar2 <= bVar1 >> 1) {
      *(undefined1 *)(param_1 + 0x1b) = 0xf;
      goto LAB_08128272;
    }
LAB_08128264:
    *(undefined1 *)(param_1 + 0x1b) = 0xff;
    uVar3 = (undefined1)((uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) >> 4);
  }
  *(undefined1 *)(param_1 + 10) = uVar3;
LAB_08128284:
  *(char *)(param_1 + 0x19) =
       (char)((int)((uint)*(byte *)(param_1 + 10) * (uint)*(byte *)(param_1 + 6) + 0xf) >> 4);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1c) & *(byte *)(param_1 + 0x1b);
  return in_lr;
}



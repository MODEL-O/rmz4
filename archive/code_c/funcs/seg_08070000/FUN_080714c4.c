// undefined FUN_080714c4(void)
// entry 0x80714c4


undefined4 FUN_080714c4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  
  FUN_08129258(auStack_14,DAT_0807156c,3);
  bVar1 = *(byte *)(param_1 + 0xc3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080736c4(param_1,0);
    *(undefined1 *)(param_1 + 0x12) = auStack_14[bVar1];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08071574) * 4 +
                               DAT_08071570)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_08071578))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  FUN_08073a68(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}



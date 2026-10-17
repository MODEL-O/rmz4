// undefined FUN_08064124(void)
// entry 0x8064124


undefined4 FUN_08064124(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08065a94(param_1,0x15);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_080641f4) * 4 +
                               DAT_080641f0)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_080641f8))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x13) != '\0') {
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    FUN_08002b10(DAT_080641fc);
    uVar3 = DAT_08064204 * *DAT_08064200 + DAT_08064208;
    *DAT_08064200 = uVar3 & 0x7fffffff;
    uVar2 = FUN_080f6d58(param_1,((uVar3 & 0x7fffffff) >> 0x10 & 1) + 2);
    *(undefined4 *)(param_1 + 0xd8) = uVar2;
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}



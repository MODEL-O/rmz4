// undefined FUN_08070898(void)
// entry 0x8070898


undefined4 FUN_08070898(int param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  cVar2 = *(char *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080736c4(param_1,3);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    cVar2 = -1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  pcVar4 = (char *)(param_1 + 0x71);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*pcVar4 * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08070978) * 4 +
                               DAT_08070974)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_0807097c))
                              + (int)*pcVar4) * 0x18);
  *(char *)(param_1 + 0x13) = *pcVar4;
  cVar1 = *pcVar4;
  FUN_08073a68(param_1);
  if ((cVar1 != cVar2) && ((cVar1 == '\x06' || (cVar1 == '\n')))) {
    FUN_08002b10(0x136);
    uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    FUN_080d4c8c(&local_20,DAT_08070980,0,uVar3 | uVar3 << 4);
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}



// undefined FUN_08063da0(void)
// entry 0x8063da0


undefined4 FUN_08063da0(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  char local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_08129258(local_24,DAT_08063e90,4);
  bVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x10e);
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    iVar2 = 0;
    do {
      FUN_080c76c8(param_1,&local_20,bVar3,
                   local_24[iVar2] + bVar3 * '\x02' * ('@' - local_24[iVar2]));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    FUN_08065a94(param_1,0xf);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08063e98) * 4 +
                               DAT_08063e94)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08063e9c))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}



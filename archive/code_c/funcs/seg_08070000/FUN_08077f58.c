// undefined FUN_08077f58(void)
// entry 0x8077f58


undefined4 FUN_08077f58(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  char local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_08129258(local_20,DAT_0807801c,3);
  cVar1 = *(char *)(param_1 + 0xc5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x192);
    iVar2 = 0;
    do {
      local_1c = *(undefined4 *)(param_1 + 0x54);
      local_18 = *(undefined4 *)(param_1 + 0x58);
      FUN_080ce1d4(param_1,&local_1c,0,local_20[iVar2] + cVar1 * '\x02' * ('@' - local_20[iVar2]));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    FUN_08078fdc(param_1,0);
    *(undefined4 *)(param_1 + 0x5c) = 500;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_08078024) * 4 +
                        DAT_08078020)));
  FUN_08078f28(param_1);
  if ((*(int *)(param_1 + 0x5c) == 0) ||
     (iVar2 = *(int *)(param_1 + 0x5c) + -1, *(int *)(param_1 + 0x5c) = iVar2, iVar2 == 0)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}



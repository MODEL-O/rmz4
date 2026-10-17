// undefined FUN_080f11cc(void)
// entry 0x80f11cc


undefined4 FUN_080f11cc(int param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined2 *)(DAT_080f1260 + 0xf2) = 0x240;
    puVar2 = (ushort *)(DAT_080f1264 + 0xf2);
    *puVar2 = 6;
    FUN_08001d30(DAT_080f1268,(0x240 - (uint)(*(ushort *)(DAT_080f1268 + 6) >> 6)) * 0x20 + 0x10000)
    ;
    FUN_08002208(DAT_080f126c,((uint)*puVar2 - (uint)*(byte *)(DAT_080f126c + 7)) * 0x20 + 0x200);
    FUN_0801cf00(param_1,0x7900);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    uVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}



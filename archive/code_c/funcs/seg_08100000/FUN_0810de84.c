// undefined FUN_0810de84(void)
// entry 0x810de84


undefined4 FUN_0810de84(void)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  *(byte *)(DAT_0810dec4 + 0xe) = *(byte *)(DAT_0810dec4 + 0xe) | 1;
  puVar2 = DAT_0810dec8;
  if (*(short *)(DAT_0810dec8 + 1) == 0) {
    if ((*(byte *)(DAT_0810decc + 4) & 0x40) == 0) {
      FUN_08001d30(DAT_0810ded0,(*DAT_0810ded4 & 0xc) << 0xc);
      FUN_08002208(DAT_0810ded8,0);
    }
    else {
      FUN_08001d30(DAT_0810df18,(*DAT_0810df1c & 0xc) << 0xc);
      FUN_08002208(DAT_0810df20,0);
    }
    puVar2 = DAT_0810df24;
    *(undefined2 *)(DAT_0810df24 + 1) = 1;
  }
  puVar1 = DAT_0810df68;
  if ((*(byte *)(DAT_0810df28 + 4) & 0x40) == 0) {
    FUN_0810df98(puVar2);
    FUN_0810e248(puVar2);
  }
  else {
    *DAT_0810df68 = *DAT_0810df68 | 0x100;
    if (*(ushort *)(puVar2 + 1) < 0x20) {
      *(ushort *)(puVar2 + 1) = *(ushort *)(puVar2 + 1) + 1;
    }
    puVar1[7] = 0x20 - *(short *)(puVar2 + 1);
    FUN_080027b8(*puVar2,DAT_0810df6c,0x12,0,0);
  }
  return in_lr;
}



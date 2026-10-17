// undefined FUN_08119bbc(void)
// entry 0x8119bbc


undefined4 FUN_08119bbc(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xdd0) = 0;
  *(undefined1 *)(param_1 + 0xdd1) = 0;
  *(undefined1 *)(param_1 + 0xdd2) = 0;
  iVar3 = param_1 + DAT_08119d0c;
  *(undefined2 *)(iVar3 + 0x30) = 0;
  *(undefined2 *)(iVar3 + 0x32) = 0;
  *(undefined2 *)(iVar3 + 0x34) = 0;
  *(undefined2 *)(iVar3 + 0x36) = 0;
  *(undefined1 *)(param_1 + DAT_08119d10) = 0;
  puVar1 = DAT_08119d18;
  FUN_08001d30(DAT_08119d14,(*DAT_08119d18 & 0xc) << 0xc);
  FUN_08002208(DAT_08119d1c,0);
  FUN_080027b8(param_1 + DAT_08119d20,DAT_08119d24,0x15,0,0);
  FUN_08001d30(DAT_08119d28,
               ((uint)*(ushort *)(DAT_08119d2c + 0x82) - (uint)(*(ushort *)(DAT_08119d28 + 6) >> 6))
               * 0x20 + 0x10000);
  FUN_08002208(DAT_08119d30,
               ((uint)*(ushort *)(DAT_08119d34 + 0x82) - (uint)*(byte *)(DAT_08119d30 + 7)) * 0x20 +
               0x200);
  FUN_0810b0e0(param_1,0,0);
  FUN_0810b0e0(param_1,0,1);
  FUN_0810b0e0(param_1,0,2);
  FUN_0810b0e0(param_1,0,3);
  FUN_0810b0e0(param_1,1,0);
  FUN_0810b0e0(param_1,2,0);
  FUN_0810b0e0(param_1,2,1);
  FUN_0810b0e0(param_1,3,0);
  FUN_0810b0e0(param_1,4,0);
  FUN_0810b0e0(param_1,4,1);
  FUN_0810b0e0(param_1,4,2);
  FUN_0810b0e0(param_1,4,3);
  FUN_0810b0e0(param_1,4,4);
  FUN_0810b0e0(param_1,4,5);
  FUN_0800249c(0x43,0x300);
  puVar2 = DAT_08119d38;
  *DAT_08119d38 = *DAT_08119d38 | 0x2000;
  *(undefined1 *)(puVar2 + 6) = 0xfe;
  *(undefined1 *)(puVar2 + 7) = 0xff;
  FUN_08001f1c(param_1 + DAT_08119d3c,(*puVar1 & 0x1f00) << 3,0x1000);
  *(undefined1 *)(param_1 + 2) = 2;
  return in_lr;
}



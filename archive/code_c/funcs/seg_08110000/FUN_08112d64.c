// undefined FUN_08112d64(void)
// entry 0x8112d64


undefined4 FUN_08112d64(int param_1)

{
  ushort *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  puVar2 = DAT_08112ee4;
  *(undefined1 *)((int)DAT_08112ee4 + DAT_08112ee8) = 0x20;
  *(undefined1 *)((int)puVar2 + DAT_08112eec) = 0x20;
  *(undefined1 *)(puVar2 + 0x200) = 0x20;
  *(undefined4 *)(puVar2 + 0x204) = 0;
  FUN_08002348();
  *DAT_08112ef0 = 0;
  puVar3 = DAT_08112ef4;
  *DAT_08112ef4 = 0;
  *(undefined1 *)(puVar3 + 7) = 0xff;
  *DAT_08112ef8 = 0;
  *puVar2 = 0;
  puVar1 = DAT_08112efc;
  *DAT_08112efc = (ushort)DAT_08112f00 & *DAT_08112efc & (ushort)DAT_08112f04 | 0x100;
  puVar1[2] = (ushort)DAT_08112f08;
  puVar1[6] = 0;
  uVar4 = DAT_08112f0c;
  puVar1[7] = 0;
  FUN_08001fd4(DAT_08112f0c,0,0x580,0x3c0);
  FUN_0810d4a8();
  puVar6 = (undefined4 *)(DAT_08112f10 + param_1);
  *puVar6 = 0xffffffff;
  *(undefined2 *)(param_1 + DAT_08112f14) = 0;
  FUN_08003384(param_1 + 0x9a0);
  FUN_080055f4();
  FUN_0801c734();
  *DAT_08112f18 = (uint)*(ushort *)(param_1 + DAT_08112f1c);
  *DAT_08112f20 = 0xffffffff;
  *DAT_08112f24 = puVar6;
  puVar6 = (undefined4 *)(param_1 + DAT_08112f2c);
  *DAT_08112f28 = *puVar6;
  FUN_0802b400(param_1 + 0x810,DAT_08112f30,1);
  FUN_0803a72c(param_1 + DAT_08112f34,DAT_08112f38,0x18);
  FUN_080502fc(param_1 + 0x860,DAT_08112f3c,5);
  FUN_0807f87c(param_1 + DAT_08112f40,DAT_08112f44,0x12);
  FUN_080bd2fc(param_1 + 0x8b0,DAT_08112f48,0x18);
  FUN_080d0b78(param_1 + DAT_08112f4c,DAT_08112f50,0x40);
  FUN_080e94dc(param_1 + 0x900,DAT_08112f54,0x16);
  FUN_08108324(param_1 + DAT_08112f58,DAT_08112f5c,10);
  FUN_081090cc(param_1 + 0x950,DAT_08112f60,0x10);
  FUN_0802ad08();
  FUN_0810de70(uVar4);
  FUN_0810e480(uVar4);
  FUN_080382b0(*puVar6,param_1 + DAT_08112f64);
  FUN_0801f224(param_1 + 0x9a0);
  iVar5 = DAT_08112f68;
  *(byte *)(DAT_08112f68 + 0x14) = *(byte *)(DAT_08112f68 + 0x14) | 0xc0;
  *(undefined1 *)(iVar5 + 0x26) = 0;
  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
  return in_lr;
}



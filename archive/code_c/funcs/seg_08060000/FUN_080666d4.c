// undefined FUN_080666d4(void)
// entry 0x80666d4


undefined4 FUN_080666d4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  FUN_0801cf00(param_1,DAT_08066844);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_08066848,0x40);
  *(undefined4 *)(param_1 + 0x98) = DAT_0806684c;
  iVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar4 + DAT_08066850;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  uVar5 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  iVar4 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xc0) = iVar4;
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xbc) + (iVar4 - *(int *)(param_1 + 0xbc) >> 1);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  iVar1 = DAT_08066858;
  iVar4 = DAT_08066854;
  FUN_08001d30(DAT_08066854 + 0x870,
               ((uint)*(ushort *)(DAT_08066858 + 0xd8) -
               (uint)(*(ushort *)(DAT_08066854 + 0x876) >> 6)) * 0x20 + 0x10000);
  iVar2 = DAT_08066860;
  FUN_08002208(DAT_0806685c + 0x870,
               ((uint)*(ushort *)(DAT_08066860 + 0xd8) - (uint)*(byte *)(DAT_0806685c + 0x877)) *
               0x20 + 0x200);
  iVar3 = DAT_08066864;
  FUN_08001d30(iVar4 + DAT_08066864,
               ((uint)*(ushort *)(iVar1 + 0xd6) - (uint)(*(ushort *)(iVar4 + DAT_08066864 + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(iVar3 + DAT_0806685c,
               ((uint)*(ushort *)(iVar2 + 0xd6) - (uint)*(byte *)(iVar3 + DAT_0806685c + 7)) * 0x20
               + 0x200);
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0x20;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08066868);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_0806686c(param_1);
  return in_lr;
}



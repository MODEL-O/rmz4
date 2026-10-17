// undefined FUN_08122e28(void)
// entry 0x8122e28


void FUN_08122e28(int param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar1 = DAT_08122e74;
  *DAT_08122e74 = 1;
  iVar2 = (param_2 & 0xff) * 0xc;
  puVar1[iVar2 + 0xe] = 1;
  *(undefined4 *)(puVar1 + iVar2 + 4) = *(undefined4 *)(param_1 + 0x6308);
  *(uint *)(puVar1 + iVar2 + 8) = (uint)*(byte *)(param_1 + 0x6301);
  puVar3 = (undefined2 *)(param_1 + DAT_08122e78);
  puVar1[iVar2 + 0xc] = (char)*puVar3;
  puVar1[iVar2 + 0xd] = (char)puVar3[1];
  return;
}



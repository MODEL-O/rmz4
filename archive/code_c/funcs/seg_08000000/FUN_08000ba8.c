// undefined FUN_08000ba8(void)
// entry 0x8000ba8


undefined4 FUN_08000ba8(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  
  iVar2 = DAT_08000c60;
  uVar1 = DAT_08000c5c;
  puVar6 = (undefined4 *)(DAT_08000c60 + -0x38);
  iVar5 = 0xd;
  puVar7 = DAT_08000c64;
  do {
    uVar4 = *puVar7;
    puVar7 = puVar7 + 1;
    *puVar6 = uVar4;
    puVar3 = DAT_08000c68;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *DAT_08000c68 = uVar1;
  puVar3[1] = iVar2;
  puVar3[2] = DAT_08000c6c;
  *DAT_08000c70 = iVar2;
  *(undefined4 *)(iVar2 + 0x120) = 0;
  *(undefined4 *)(iVar2 + 0x124) = 0;
  *(undefined1 *)(iVar2 + 0x12e) = 0;
  *DAT_08000c74 = 1;
  *DAT_08000c78 = (short)DAT_08000c7c;
  *DAT_08000c80 = 0x28;
  *(undefined1 *)(DAT_08000c84 + iVar2) = 1;
  *(undefined1 *)(iVar2 + 300) = 0;
  *(undefined4 *)(iVar2 + 0x128) = 0;
  *(undefined1 *)(DAT_08000c88 + iVar2) = 0;
  *(undefined4 *)(iVar2 + 0x144) = 0;
  *(undefined4 *)(iVar2 + 0x138) = 0;
  *(undefined4 *)(iVar2 + 0x160) = 0;
  *(undefined4 *)(iVar2 + 0x150) = 0;
  *(undefined4 *)(iVar2 + 0x184) = 0;
  *(undefined4 *)(iVar2 + 0x174) = 0;
  return in_lr;
}



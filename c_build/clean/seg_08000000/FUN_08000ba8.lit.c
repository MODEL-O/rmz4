// undefined FUN_08000ba8(void)
// entry 0x8000ba8


void FUN_08000ba8(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  iVar2 = 0x030015c8;
  uVar1 = 0x080001bc;
  puVar6 = (undefined4 *)(0x030015c8 + -0x38);
  iVar5 = 0xd;
  puVar7 = 0x0812950c;
  do {
    uVar4 = *puVar7;
    puVar7 = puVar7 + 1;
    *puVar6 = uVar4;
    puVar3 = 0x040000d4;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  (*(undefined4 *)0x040000d4) = uVar1;
  puVar3[1] = iVar2;
  puVar3[2] = 0x84000048;
  (*(int *)0x03007ffc) = iVar2;
  *(undefined4 *)(iVar2 + 0x120) = 0;
  *(undefined4 *)(iVar2 + 0x124) = 0;
  *(undefined1 *)(iVar2 + 0x12e) = 0;
  (*(int *)0x04000208) = 1;
  (*(int *)0x04000200) = (short)0x00002005;
  (*(int *)0x04000004) = 0x28;
  *(undefined1 *)(0x0000012d + iVar2) = 1;
  *(undefined1 *)(iVar2 + 300) = 0;
  *(undefined4 *)(iVar2 + 0x128) = 0;
  *(undefined1 *)(0x0000012f + iVar2) = 0;
  *(undefined4 *)(iVar2 + 0x144) = 0;
  *(undefined4 *)(iVar2 + 0x138) = 0;
  *(undefined4 *)(iVar2 + 0x160) = 0;
  *(undefined4 *)(iVar2 + 0x150) = 0;
  *(undefined4 *)(iVar2 + 0x184) = 0;
  *(undefined4 *)(iVar2 + 0x174) = 0;
  return;
}



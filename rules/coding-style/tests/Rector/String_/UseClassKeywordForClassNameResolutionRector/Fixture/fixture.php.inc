<?php

namespace Rector\CodingStyle\Tests\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class SomeClass
{
    public function run()
    {
        return '<?php if (Rector\CodingStyle\Tests\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture\SomeClass::staticCall()) { ?>';
    }
}

?>
-----
<?php

namespace Rector\CodingStyle\Tests\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class SomeClass
{
    public function run()
    {
        return '<?php if (' . \Rector\CodingStyle\Tests\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture\SomeClass::class . '::staticCall()) { ?>';
    }
}

?>
